def process_sensor_data(readings):
    # get the square of non-negative readings:
    valid_square_readings = [round(n*n, 2) for n in readings if n >= 0]

    final_result = sorted(valid_square_readings)
    return final_result

sensor_data = [25.1, 26.3, -5.0, 24.8, -2.1, 27.0, 22.9]
processed_data = process_sensor_data(sensor_data)

print(f"Original data: {sensor_data}")
print(f"Processed data: {processed_data}")
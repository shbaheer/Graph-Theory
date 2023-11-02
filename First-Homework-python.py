import time
start_time=time.time()
for i in range(1,400):
    for j in range(1,800):
        print(j)
end_time=time.time()
time=end_time-start_time
print(time)
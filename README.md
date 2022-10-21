# ProjectRos2XYolo
Project Crew 05 angkatan 21 untuk membuat program Ros2 X Yolo

[Project Pasca Penurunan Ilmu SAUVC 2022]

ROS:
1. Wajib menggunakan ROS2
2. Bebas menggunakan C++ / Python
3. Terdiri dari node :
a. Movement -> menerima input master dan vision, mengubah menjadi pergerakan dan kecepatan
b. Master -> mengirimkan misi (nilai misi di dapat dari input)
c. Vision -> mengirimkan objek yang terdeteksi
4. Master melakukan print hasil subscribing dari movement (berupa kecepatan dan gerakan)

Contoh 1:
master : mission = 1
vision : deteksi = botol

output:
gerakan : maju
kecepatan : 50%

Contoh 2:
master : mission = 2
vision : deteksi = botol

output:
gerakan : maju
kecepatan : 100%

Contoh 3:
master : mission = 1
vision : deteksi = mouse

output:
gerakan : kanan
kecepatan : 50%

Catatan:
perihal mengenai decision pergerakan dan kecepatan BEBAS kalian sendiri yang atur, mau objek A kecepatan dan gerakan nya
apa bebas terserah kalian, yang penting terdapat perbedaan

Vision:
- Menggunakan YOLOv5/6/7
- Terdapat 3 kelas objek gambar (contoh: Botol, apel, hape)
- Tiap kelas minimal 50 gambar
- Di labeling dengan roboflow
- Jika kuantitas gambar per kelas kurang banyak bisa digunakan fitur augmentasi
- Training dengan batch dan epoch bebas
- Jangan lupa save semua grafiknya

DEADLINE : 15 November 2022

from pytube import YouTube

link = "https://youtu.be/WM3PQbXhQOI?si=tTJymQw5JDXBuWZ7"
yt = YouTube(link)

video = yt.streams.filter(res="1080p")
video.download()
print("done")



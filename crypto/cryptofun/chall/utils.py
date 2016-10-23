import zlib
SECRET = "ECTF{ihopeyouarehavingfunlikeiam}"

def upload_data(data):
	# Mimic upload of data. Return length used to calculate cost
	return len(zlib.compress(data))


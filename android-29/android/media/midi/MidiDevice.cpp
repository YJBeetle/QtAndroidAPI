#include "./MidiDevice_MidiConnection.hpp"
#include "./MidiDeviceInfo.hpp"
#include "./MidiInputPort.hpp"
#include "./MidiOutputPort.hpp"
#include "./MidiDevice.hpp"

namespace android::media::midi
{
	// Fields
	
	MidiDevice::MidiDevice(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void MidiDevice::close()
	{
		__thiz.callMethod<void>(
			"close",
			"()V"
		);
	}
	QAndroidJniObject MidiDevice::connectPorts(android::media::midi::MidiInputPort arg0, jint arg1)
	{
		return __thiz.callObjectMethod(
			"connectPorts",
			"(Landroid/media/midi/MidiInputPort;I)Landroid/media/midi/MidiDevice$MidiConnection;",
			arg0.__jniObject().object(),
			arg1
		);
	}
	QAndroidJniObject MidiDevice::getInfo()
	{
		return __thiz.callObjectMethod(
			"getInfo",
			"()Landroid/media/midi/MidiDeviceInfo;"
		);
	}
	QAndroidJniObject MidiDevice::openInputPort(jint arg0)
	{
		return __thiz.callObjectMethod(
			"openInputPort",
			"(I)Landroid/media/midi/MidiInputPort;",
			arg0
		);
	}
	QAndroidJniObject MidiDevice::openOutputPort(jint arg0)
	{
		return __thiz.callObjectMethod(
			"openOutputPort",
			"(I)Landroid/media/midi/MidiOutputPort;",
			arg0
		);
	}
	jstring MidiDevice::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::media::midi


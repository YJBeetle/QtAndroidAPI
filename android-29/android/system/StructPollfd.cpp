#include "../../java/io/FileDescriptor.hpp"
#include "./StructPollfd.hpp"

namespace android::system
{
	// Fields
	jshort StructPollfd::events()
	{
		return __thiz.getField<jshort>(
			"events"
		);
	}
	QAndroidJniObject StructPollfd::fd()
	{
		return __thiz.getObjectField(
			"fd",
			"Ljava/io/FileDescriptor;"
		);
	}
	jshort StructPollfd::revents()
	{
		return __thiz.getField<jshort>(
			"revents"
		);
	}
	jobject StructPollfd::userData()
	{
		return __thiz.getObjectField(
			"userData",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	
	StructPollfd::StructPollfd(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	StructPollfd::StructPollfd()
	{
		__thiz = QAndroidJniObject(
			"android.system.StructPollfd",
			"()V"
		);
	}
	
	// Methods
	jstring StructPollfd::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::system


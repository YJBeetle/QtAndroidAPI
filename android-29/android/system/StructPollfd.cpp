#include "../../java/io/FileDescriptor.hpp"
#include "./StructPollfd.hpp"

namespace android::system
{
	// Fields
	jshort StructPollfd::events()
	{
		return getField<jshort>(
			"events"
		);
	}
	QAndroidJniObject StructPollfd::fd()
	{
		return getObjectField(
			"fd",
			"Ljava/io/FileDescriptor;"
		);
	}
	jshort StructPollfd::revents()
	{
		return getField<jshort>(
			"revents"
		);
	}
	jobject StructPollfd::userData()
	{
		return getObjectField(
			"userData",
			"Ljava/lang/Object;"
		).object<jobject>();
	}
	
	// QAndroidJniObject forward
	StructPollfd::StructPollfd(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	StructPollfd::StructPollfd()
		: __JniBaseClass(
			"android.system.StructPollfd",
			"()V"
		) {}
	
	// Methods
	jstring StructPollfd::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace android::system

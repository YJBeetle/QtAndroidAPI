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
	java::io::FileDescriptor StructPollfd::fd()
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
	
	// QJniObject forward
	StructPollfd::StructPollfd(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	StructPollfd::StructPollfd()
		: JObject(
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


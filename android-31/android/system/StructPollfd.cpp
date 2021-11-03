#include "../../java/io/FileDescriptor.hpp"
#include "../../JObject.hpp"
#include "../../JString.hpp"
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
	JObject StructPollfd::userData()
	{
		return getObjectField(
			"userData",
			"Ljava/lang/Object;"
		);
	}
	
	// QAndroidJniObject forward
	StructPollfd::StructPollfd(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	StructPollfd::StructPollfd()
		: JObject(
			"android.system.StructPollfd",
			"()V"
		) {}
	
	// Methods
	JString StructPollfd::toString()
	{
		return callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		);
	}
} // namespace android::system


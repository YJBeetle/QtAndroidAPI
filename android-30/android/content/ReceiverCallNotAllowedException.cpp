#include "../../JString.hpp"
#include "./ReceiverCallNotAllowedException.hpp"

namespace android::content
{
	// Fields
	
	// QAndroidJniObject forward
	ReceiverCallNotAllowedException::ReceiverCallNotAllowedException(QAndroidJniObject obj) : android::util::AndroidRuntimeException(obj) {}
	
	// Constructors
	ReceiverCallNotAllowedException::ReceiverCallNotAllowedException(JString arg0)
		: android::util::AndroidRuntimeException(
			"android.content.ReceiverCallNotAllowedException",
			"(Ljava/lang/String;)V",
			arg0.object<jstring>()
		) {}
	
	// Methods
} // namespace android::content


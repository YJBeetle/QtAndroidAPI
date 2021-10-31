#include "./ReceiverCallNotAllowedException.hpp"

namespace android::content
{
	// Fields
	
	// QJniObject forward
	ReceiverCallNotAllowedException::ReceiverCallNotAllowedException(QJniObject obj) : android::util::AndroidRuntimeException(obj) {}
	
	// Constructors
	ReceiverCallNotAllowedException::ReceiverCallNotAllowedException(jstring arg0)
		: android::util::AndroidRuntimeException(
			"android.content.ReceiverCallNotAllowedException",
			"(Ljava/lang/String;)V",
			arg0
		) {}
	
	// Methods
} // namespace android::content


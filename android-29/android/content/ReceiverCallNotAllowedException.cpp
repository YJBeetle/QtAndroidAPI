#include "./ReceiverCallNotAllowedException.hpp"

namespace android::content
{
	// Fields
	
	ReceiverCallNotAllowedException::ReceiverCallNotAllowedException(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	ReceiverCallNotAllowedException::ReceiverCallNotAllowedException(jstring arg0)
	{
		__thiz = QAndroidJniObject(
			"android.content.ReceiverCallNotAllowedException",
			"(Ljava/lang/String;)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::content


#include "./SingleLineTransformationMethod.hpp"

namespace android::text::method
{
	// Fields
	
	SingleLineTransformationMethod::SingleLineTransformationMethod(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	SingleLineTransformationMethod::SingleLineTransformationMethod()
	{
		__thiz = QAndroidJniObject(
			"android.text.method.SingleLineTransformationMethod",
			"()V"
		);
	}
	
	// Methods
	QAndroidJniObject SingleLineTransformationMethod::getInstance()
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"android.text.method.SingleLineTransformationMethod",
			"getInstance",
			"()Landroid/text/method/SingleLineTransformationMethod;"
		);
	}
} // namespace android::text::method


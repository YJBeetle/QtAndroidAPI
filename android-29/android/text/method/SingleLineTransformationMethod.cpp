#include "./SingleLineTransformationMethod.hpp"

namespace android::text::method
{
	// Fields
	
	// QAndroidJniObject forward
	SingleLineTransformationMethod::SingleLineTransformationMethod(QAndroidJniObject obj) : android::text::method::ReplacementTransformationMethod(obj) {}
	
	// Constructors
	SingleLineTransformationMethod::SingleLineTransformationMethod()
		: android::text::method::ReplacementTransformationMethod(
			"android.text.method.SingleLineTransformationMethod",
			"()V"
		) {}
	
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

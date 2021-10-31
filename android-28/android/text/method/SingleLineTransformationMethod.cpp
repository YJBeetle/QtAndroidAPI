#include "./SingleLineTransformationMethod.hpp"

namespace android::text::method
{
	// Fields
	
	// QJniObject forward
	SingleLineTransformationMethod::SingleLineTransformationMethod(QJniObject obj) : android::text::method::ReplacementTransformationMethod(obj) {}
	
	// Constructors
	SingleLineTransformationMethod::SingleLineTransformationMethod()
		: android::text::method::ReplacementTransformationMethod(
			"android.text.method.SingleLineTransformationMethod",
			"()V"
		) {}
	
	// Methods
	android::text::method::SingleLineTransformationMethod SingleLineTransformationMethod::getInstance()
	{
		return callStaticObjectMethod(
			"android.text.method.SingleLineTransformationMethod",
			"getInstance",
			"()Landroid/text/method/SingleLineTransformationMethod;"
		);
	}
} // namespace android::text::method


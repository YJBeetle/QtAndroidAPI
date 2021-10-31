#include "./MutableFloat.hpp"

namespace android::util
{
	// Fields
	jfloat MutableFloat::value()
	{
		return getField<jfloat>(
			"value"
		);
	}
	
	// QJniObject forward
	MutableFloat::MutableFloat(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MutableFloat::MutableFloat(jfloat arg0)
		: __JniBaseClass(
			"android.util.MutableFloat",
			"(F)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util


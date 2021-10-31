#include "./MutableShort.hpp"

namespace android::util
{
	// Fields
	jshort MutableShort::value()
	{
		return getField<jshort>(
			"value"
		);
	}
	
	// QJniObject forward
	MutableShort::MutableShort(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MutableShort::MutableShort(jshort arg0)
		: __JniBaseClass(
			"android.util.MutableShort",
			"(S)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util


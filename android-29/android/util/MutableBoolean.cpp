#include "./MutableBoolean.hpp"

namespace android::util
{
	// Fields
	jboolean MutableBoolean::value()
	{
		return getField<jboolean>(
			"value"
		);
	}
	
	// QAndroidJniObject forward
	MutableBoolean::MutableBoolean(QAndroidJniObject obj) : JObject(obj) {}
	
	// Constructors
	MutableBoolean::MutableBoolean(jboolean arg0)
		: JObject(
			"android.util.MutableBoolean",
			"(Z)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util


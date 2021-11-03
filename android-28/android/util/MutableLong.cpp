#include "./MutableLong.hpp"

namespace android::util
{
	// Fields
	jlong MutableLong::value()
	{
		return getField<jlong>(
			"value"
		);
	}
	
	// QJniObject forward
	MutableLong::MutableLong(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	MutableLong::MutableLong(jlong arg0)
		: JObject(
			"android.util.MutableLong",
			"(J)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util


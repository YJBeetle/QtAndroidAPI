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
	MutableLong::MutableLong(QJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	MutableLong::MutableLong(jlong arg0)
		: __JniBaseClass(
			"android.util.MutableLong",
			"(J)V",
			arg0
		) {}
	
	// Methods
} // namespace android::util


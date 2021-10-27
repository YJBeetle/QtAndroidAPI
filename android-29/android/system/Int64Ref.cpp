#include "./Int64Ref.hpp"

namespace android::system
{
	// Fields
	jlong Int64Ref::value()
	{
		return __thiz.getField<jlong>(
			"value"
		);
	}
	
	Int64Ref::Int64Ref(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	Int64Ref::Int64Ref(jlong &arg0)
	{
		__thiz = QAndroidJniObject(
			"android.system.Int64Ref",
			"(J)V",
			arg0
		);
	}
	
	// Methods
} // namespace android::system


#include "./Int64Ref.hpp"

namespace android::system
{
	// Fields
	jlong Int64Ref::value()
	{
		return getField<jlong>(
			"value"
		);
	}
	
	// Constructors
	Int64Ref::Int64Ref(jlong arg0)
		: JObject(
			"android.system.Int64Ref",
			"(J)V",
			arg0
		) {}
	
	// Methods
} // namespace android::system


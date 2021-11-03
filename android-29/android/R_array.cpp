#include "./R_array.hpp"

namespace android
{
	// Fields
	jint R_array::emailAddressTypes()
	{
		return getStaticField<jint>(
			"android.R$array",
			"emailAddressTypes"
		);
	}
	jint R_array::imProtocols()
	{
		return getStaticField<jint>(
			"android.R$array",
			"imProtocols"
		);
	}
	jint R_array::organizationTypes()
	{
		return getStaticField<jint>(
			"android.R$array",
			"organizationTypes"
		);
	}
	jint R_array::phoneTypes()
	{
		return getStaticField<jint>(
			"android.R$array",
			"phoneTypes"
		);
	}
	jint R_array::postalAddressTypes()
	{
		return getStaticField<jint>(
			"android.R$array",
			"postalAddressTypes"
		);
	}
	
	// QJniObject forward
	R_array::R_array(QJniObject obj) : JObject(obj) {}
	
	// Constructors
	R_array::R_array()
		: JObject(
			"android.R$array",
			"()V"
		) {}
	
	// Methods
} // namespace android


#pragma once

#include "./R_array.def.hpp"

namespace android
{
	// Fields
	inline jint R_array::emailAddressTypes()
	{
		return getStaticField<jint>(
			"android.R$array",
			"emailAddressTypes"
		);
	}
	inline jint R_array::imProtocols()
	{
		return getStaticField<jint>(
			"android.R$array",
			"imProtocols"
		);
	}
	inline jint R_array::organizationTypes()
	{
		return getStaticField<jint>(
			"android.R$array",
			"organizationTypes"
		);
	}
	inline jint R_array::phoneTypes()
	{
		return getStaticField<jint>(
			"android.R$array",
			"phoneTypes"
		);
	}
	inline jint R_array::postalAddressTypes()
	{
		return getStaticField<jint>(
			"android.R$array",
			"postalAddressTypes"
		);
	}
	
	// Constructors
	inline R_array::R_array()
		: JObject(
			"android.R$array",
			"()V"
		) {}
	
	// Methods
} // namespace android

// Base class headers


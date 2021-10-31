#include "./R_array.hpp"

namespace android
{
	// Fields
	jint R_array::emailAddressTypes()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$array",
			"emailAddressTypes"
		);
	}
	jint R_array::imProtocols()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$array",
			"imProtocols"
		);
	}
	jint R_array::organizationTypes()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$array",
			"organizationTypes"
		);
	}
	jint R_array::phoneTypes()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$array",
			"phoneTypes"
		);
	}
	jint R_array::postalAddressTypes()
	{
		return QAndroidJniObject::getStaticField<jint>(
			"android.R$array",
			"postalAddressTypes"
		);
	}
	
	// QAndroidJniObject forward
	R_array::R_array(QAndroidJniObject obj) : __JniBaseClass(obj) {}
	
	// Constructors
	R_array::R_array()
		: __JniBaseClass(
			"android.R$array",
			"()V"
		) {}
	
	// Methods
} // namespace android

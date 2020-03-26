#pragma once

#ifndef ANDROID_R_ARRAY
#define ANDROID_R_ARRAY

#include "../__JniBaseClass.hpp"


namespace __jni_impl::android
{
	class R_array : public __JniBaseClass
	{
	public:
		// Fields
		static jint emailAddressTypes();
		static jint imProtocols();
		static jint organizationTypes();
		static jint phoneTypes();
		static jint postalAddressTypes();
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android


namespace __jni_impl::android
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
	
	// Constructors
	void R_array::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.R$array",
			"()V");
	}
	
	// Methods
} // namespace __jni_impl::android

namespace android
{
	class R_array : public __jni_impl::android::R_array
	{
	public:
		R_array(QAndroidJniObject obj) { __thiz = obj; }
		R_array()
		{
			__constructor();
		}
	};
} // namespace android

#endif // ANDROID_R_ARRAY


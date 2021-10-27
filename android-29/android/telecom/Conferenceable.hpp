#pragma once

#include "../../__JniBaseClass.hpp"


namespace __jni_impl::android::telecom
{
	class Conferenceable : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
	};
} // namespace __jni_impl::android::telecom


namespace __jni_impl::android::telecom
{
	// Fields
	
	// Constructors
	void Conferenceable::__constructor()
	{
		__thiz = QAndroidJniObject(
			"android.telecom.Conferenceable",
			"(V)V");
	}
	
	// Methods
} // namespace __jni_impl::android::telecom

namespace android::telecom
{
	class Conferenceable : public __jni_impl::android::telecom::Conferenceable
	{
	public:
		Conferenceable(QAndroidJniObject obj) { __thiz = obj; }
		Conferenceable()
		{
			__constructor();
		}
	};
} // namespace android::telecom


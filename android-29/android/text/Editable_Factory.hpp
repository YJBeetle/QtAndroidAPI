#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::text
{
	class Editable_Factory : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Editable_Factory(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Editable_Factory(QAndroidJniObject obj);
		
		// Constructors
		Editable_Factory();
		
		// Methods
		static QAndroidJniObject getInstance();
		QAndroidJniObject newEditable(jstring arg0);
	};
} // namespace android::text


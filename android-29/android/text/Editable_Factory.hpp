#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::text
{
	class Editable_Factory : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Editable_Factory(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Editable_Factory(QJniObject obj);
		
		// Constructors
		Editable_Factory();
		
		// Methods
		static android::text::Editable_Factory getInstance();
		__JniBaseClass newEditable(jstring arg0);
	};
} // namespace android::text


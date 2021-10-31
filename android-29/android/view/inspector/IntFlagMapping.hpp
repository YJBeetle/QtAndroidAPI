#pragma once

#include "../../../__JniBaseClass.hpp"


namespace android::view::inspector
{
	class IntFlagMapping : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit IntFlagMapping(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		IntFlagMapping(QJniObject obj);
		
		// Constructors
		IntFlagMapping();
		
		// Methods
		void add(jint arg0, jint arg1, jstring arg2);
		__JniBaseClass get(jint arg0);
	};
} // namespace android::view::inspector


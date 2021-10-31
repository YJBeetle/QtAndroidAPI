#pragma once

#include "../../__JniBaseClass.hpp"


namespace android::telecom
{
	class Conferenceable : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Conferenceable(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Conferenceable(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace android::telecom


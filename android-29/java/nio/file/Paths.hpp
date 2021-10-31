#pragma once

#include "../../../__JniBaseClass.hpp"

namespace java::net
{
	class URI;
}

namespace java::nio::file
{
	class Paths : public __JniBaseClass
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Paths(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Paths(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static __JniBaseClass get(java::net::URI arg0);
		static __JniBaseClass get(jstring arg0, jarray arg1);
	};
} // namespace java::nio::file


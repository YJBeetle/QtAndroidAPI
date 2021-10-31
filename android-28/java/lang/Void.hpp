#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::lang
{
	class Void : public __JniBaseClass
	{
	public:
		// Fields
		static jclass TYPE();
		
		// QJniObject forward
		template<typename ...Ts> explicit Void(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Void(QJniObject obj);
		
		// Constructors
		
		// Methods
	};
} // namespace java::lang


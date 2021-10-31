#pragma once

#include "../../__JniBaseClass.hpp"


namespace java::lang
{
	class Character_Subset : public __JniBaseClass
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit Character_Subset(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		Character_Subset(QJniObject obj);
		
		// Constructors
		
		// Methods
		jboolean equals(jobject arg0);
		jint hashCode();
		jstring toString();
	};
} // namespace java::lang


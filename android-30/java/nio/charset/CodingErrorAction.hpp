#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::nio::charset
{
	class CodingErrorAction : public __JniBaseClass
	{
	public:
		// Fields
		static java::nio::charset::CodingErrorAction IGNORE();
		static java::nio::charset::CodingErrorAction REPLACE();
		static java::nio::charset::CodingErrorAction REPORT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CodingErrorAction(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CodingErrorAction(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring toString();
	};
} // namespace java::nio::charset


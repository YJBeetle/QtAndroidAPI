#pragma once

#include "../../../__JniBaseClass.hpp"


namespace java::nio::charset
{
	class CodingErrorAction : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject IGNORE();
		static QAndroidJniObject REPLACE();
		static QAndroidJniObject REPORT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit CodingErrorAction(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		CodingErrorAction(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		jstring toString();
	};
} // namespace java::nio::charset


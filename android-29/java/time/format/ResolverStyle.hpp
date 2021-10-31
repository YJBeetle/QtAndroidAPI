#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../../lang/Enum.hpp"


namespace java::time::format
{
	class ResolverStyle : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject LENIENT();
		static QAndroidJniObject SMART();
		static QAndroidJniObject STRICT();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ResolverStyle(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ResolverStyle(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::time::format


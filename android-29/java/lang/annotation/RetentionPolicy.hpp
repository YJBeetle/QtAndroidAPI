#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../Enum.hpp"


namespace java::lang::annotation
{
	class RetentionPolicy : public java::lang::Enum
	{
	public:
		// Fields
		static QAndroidJniObject CLASS();
		static QAndroidJniObject RUNTIME();
		static QAndroidJniObject SOURCE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit RetentionPolicy(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		RetentionPolicy(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static QAndroidJniObject valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::lang::annotation


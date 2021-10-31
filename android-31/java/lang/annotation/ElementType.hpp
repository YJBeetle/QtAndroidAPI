#pragma once

#include "../../../__JniBaseClass.hpp"
#include "../Enum.hpp"


namespace java::lang::annotation
{
	class ElementType : public java::lang::Enum
	{
	public:
		// Fields
		static java::lang::annotation::ElementType ANNOTATION_TYPE();
		static java::lang::annotation::ElementType CONSTRUCTOR();
		static java::lang::annotation::ElementType FIELD();
		static java::lang::annotation::ElementType LOCAL_VARIABLE();
		static java::lang::annotation::ElementType _METHOD();
		static java::lang::annotation::ElementType MODULE();
		static java::lang::annotation::ElementType PACKAGE();
		static java::lang::annotation::ElementType PARAMETER();
		static java::lang::annotation::ElementType RECORD_COMPONENT();
		static java::lang::annotation::ElementType TYPE();
		static java::lang::annotation::ElementType TYPE_PARAMETER();
		static java::lang::annotation::ElementType TYPE_USE();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit ElementType(const char *className, const char *sig, Ts...agv) : java::lang::Enum(className, sig, std::forward<Ts>(agv)...) {}
		ElementType(QAndroidJniObject obj);
		
		// Constructors
		
		// Methods
		static java::lang::annotation::ElementType valueOf(jstring arg0);
		static jarray values();
	};
} // namespace java::lang::annotation


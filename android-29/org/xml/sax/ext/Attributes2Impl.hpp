#pragma once

#include "../../../../__JniBaseClass.hpp"
#include "../helpers/AttributesImpl.hpp"


namespace org::xml::sax::ext
{
	class Attributes2Impl : public org::xml::sax::helpers::AttributesImpl
	{
	public:
		// Fields
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit Attributes2Impl(const char *className, const char *sig, Ts...agv) : org::xml::sax::helpers::AttributesImpl(className, sig, std::forward<Ts>(agv)...) {}
		Attributes2Impl(QAndroidJniObject obj);
		
		// Constructors
		Attributes2Impl();
		Attributes2Impl(__JniBaseClass arg0);
		
		// Methods
		void addAttribute(jstring arg0, jstring arg1, jstring arg2, jstring arg3, jstring arg4);
		jboolean isDeclared(jint arg0);
		jboolean isDeclared(jstring arg0);
		jboolean isDeclared(jstring arg0, jstring arg1);
		jboolean isSpecified(jint arg0);
		jboolean isSpecified(jstring arg0);
		jboolean isSpecified(jstring arg0, jstring arg1);
		void removeAttribute(jint arg0);
		void setAttributes(__JniBaseClass arg0);
		void setDeclared(jint arg0, jboolean arg1);
		void setSpecified(jint arg0, jboolean arg1);
	};
} // namespace org::xml::sax::ext


#pragma once

#include "../helpers/AttributesImpl.hpp"

class JBooleanArray;
class JString;

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
		Attributes2Impl(JObject arg0);
		
		// Methods
		void addAttribute(JString arg0, JString arg1, JString arg2, JString arg3, JString arg4) const;
		jboolean isDeclared(jint arg0) const;
		jboolean isDeclared(JString arg0) const;
		jboolean isDeclared(JString arg0, JString arg1) const;
		jboolean isSpecified(jint arg0) const;
		jboolean isSpecified(JString arg0) const;
		jboolean isSpecified(JString arg0, JString arg1) const;
		void removeAttribute(jint arg0) const;
		void setAttributes(JObject arg0) const;
		void setDeclared(jint arg0, jboolean arg1) const;
		void setSpecified(jint arg0, jboolean arg1) const;
	};
} // namespace org::xml::sax::ext


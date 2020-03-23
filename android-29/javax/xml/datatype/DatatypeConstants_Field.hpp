#pragma once

#ifndef JAVAX_XML_DATATYPE_DATATYPECONSTANTS_FIELD
#define JAVAX_XML_DATATYPE_DATATYPECONSTANTS_FIELD

#include "../../../__JniBaseClass.hpp"


namespace __jni_impl::javax::xml::datatype
{
	class DatatypeConstants_Field : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		QAndroidJniObject toString();
		jint getId();
	};
} // namespace __jni_impl::javax::xml::datatype


namespace __jni_impl::javax::xml::datatype
{
	// Fields
	
	// Constructors
	void DatatypeConstants_Field::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.datatype.DatatypeConstants$Field",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject DatatypeConstants_Field::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;");
	}
	jint DatatypeConstants_Field::getId()
	{
		return __thiz.callMethod<jint>(
			"getId",
			"()I");
	}
} // namespace __jni_impl::javax::xml::datatype

namespace javax::xml::datatype
{
	class DatatypeConstants_Field : public __jni_impl::javax::xml::datatype::DatatypeConstants_Field
	{
	public:
		DatatypeConstants_Field(QAndroidJniObject obj) { __thiz = obj; }
		DatatypeConstants_Field()
		{
			__constructor();
		}
	};
} // namespace javax::xml::datatype

#endif // JAVAX_XML_DATATYPE_DATATYPECONSTANTS_FIELD


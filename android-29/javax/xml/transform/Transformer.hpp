#pragma once

#ifndef JAVAX_XML_TRANSFORM_TRANSFORMER
#define JAVAX_XML_TRANSFORM_TRANSFORMER

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class Properties;
}

namespace __jni_impl::javax::xml::transform
{
	class Transformer : public __JniBaseClass
	{
	public:
		// Fields
		
		// Constructors
		void __constructor();
		
		// Methods
		void transform(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1);
		void reset();
		void clearParameters();
		void setParameter(jstring arg0, jobject arg1);
		void setParameter(const QString &arg0, jobject arg1);
		jobject getParameter(jstring arg0);
		jobject getParameter(const QString &arg0);
		void setURIResolver(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getURIResolver();
		void setErrorListener(__jni_impl::__JniBaseClass arg0);
		QAndroidJniObject getErrorListener();
		void setOutputProperties(__jni_impl::java::util::Properties arg0);
		QAndroidJniObject getOutputProperties();
		void setOutputProperty(jstring arg0, jstring arg1);
		void setOutputProperty(const QString &arg0, const QString &arg1);
		jstring getOutputProperty(jstring arg0);
		jstring getOutputProperty(const QString &arg0);
	};
} // namespace __jni_impl::javax::xml::transform

#include "../../../java/util/Properties.hpp"

namespace __jni_impl::javax::xml::transform
{
	// Fields
	
	// Constructors
	void Transformer::__constructor()
	{
		__thiz = QAndroidJniObject(
			"javax.xml.transform.Transformer",
			"(V)V");
	}
	
	// Methods
	void Transformer::transform(__jni_impl::__JniBaseClass arg0, __jni_impl::__JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"transform",
			"(Ljavax/xml/transform/Source;Ljavax/xml/transform/Result;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
	void Transformer::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Transformer::clearParameters()
	{
		__thiz.callMethod<void>(
			"clearParameters",
			"()V"
		);
	}
	void Transformer::setParameter(jstring arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setParameter",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			arg0,
			arg1
		);
	}
	void Transformer::setParameter(const QString &arg0, jobject arg1)
	{
		__thiz.callMethod<void>(
			"setParameter",
			"(Ljava/lang/String;Ljava/lang/Object;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			arg1
		);
	}
	jobject Transformer::getParameter(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getParameter",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			arg0
		).object<jobject>();
	}
	jobject Transformer::getParameter(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getParameter",
			"(Ljava/lang/String;)Ljava/lang/Object;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jobject>();
	}
	void Transformer::setURIResolver(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setURIResolver",
			"(Ljavax/xml/transform/URIResolver;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Transformer::getURIResolver()
	{
		return __thiz.callObjectMethod(
			"getURIResolver",
			"()Ljavax/xml/transform/URIResolver;"
		);
	}
	void Transformer::setErrorListener(__jni_impl::__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setErrorListener",
			"(Ljavax/xml/transform/ErrorListener;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Transformer::getErrorListener()
	{
		return __thiz.callObjectMethod(
			"getErrorListener",
			"()Ljavax/xml/transform/ErrorListener;"
		);
	}
	void Transformer::setOutputProperties(__jni_impl::java::util::Properties arg0)
	{
		__thiz.callMethod<void>(
			"setOutputProperties",
			"(Ljava/util/Properties;)V",
			arg0.__jniObject().object()
		);
	}
	QAndroidJniObject Transformer::getOutputProperties()
	{
		return __thiz.callObjectMethod(
			"getOutputProperties",
			"()Ljava/util/Properties;"
		);
	}
	void Transformer::setOutputProperty(jstring arg0, jstring arg1)
	{
		__thiz.callMethod<void>(
			"setOutputProperty",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			arg0,
			arg1
		);
	}
	void Transformer::setOutputProperty(const QString &arg0, const QString &arg1)
	{
		__thiz.callMethod<void>(
			"setOutputProperty",
			"(Ljava/lang/String;Ljava/lang/String;)V",
			QAndroidJniObject::fromString(arg0).object<jstring>(),
			QAndroidJniObject::fromString(arg1).object<jstring>()
		);
	}
	jstring Transformer::getOutputProperty(jstring arg0)
	{
		return __thiz.callObjectMethod(
			"getOutputProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			arg0
		).object<jstring>();
	}
	jstring Transformer::getOutputProperty(const QString &arg0)
	{
		return __thiz.callObjectMethod(
			"getOutputProperty",
			"(Ljava/lang/String;)Ljava/lang/String;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		).object<jstring>();
	}
} // namespace __jni_impl::javax::xml::transform

namespace javax::xml::transform
{
	class Transformer : public __jni_impl::javax::xml::transform::Transformer
	{
	public:
		Transformer(QAndroidJniObject obj) { __thiz = obj; }
		Transformer()
		{
			__constructor();
		}
	};
} // namespace javax::xml::transform

#endif // JAVAX_XML_TRANSFORM_TRANSFORMER


#include "../../../java/util/Properties.hpp"
#include "./Transformer.hpp"

namespace javax::xml::transform
{
	// Fields
	
	Transformer::Transformer(QAndroidJniObject obj) { __thiz = obj; }
	// Constructors
	
	// Methods
	void Transformer::clearParameters()
	{
		__thiz.callMethod<void>(
			"clearParameters",
			"()V"
		);
	}
	QAndroidJniObject Transformer::getErrorListener()
	{
		return __thiz.callObjectMethod(
			"getErrorListener",
			"()Ljavax/xml/transform/ErrorListener;"
		);
	}
	QAndroidJniObject Transformer::getOutputProperties()
	{
		return __thiz.callObjectMethod(
			"getOutputProperties",
			"()Ljava/util/Properties;"
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
	QAndroidJniObject Transformer::getURIResolver()
	{
		return __thiz.callObjectMethod(
			"getURIResolver",
			"()Ljavax/xml/transform/URIResolver;"
		);
	}
	void Transformer::reset()
	{
		__thiz.callMethod<void>(
			"reset",
			"()V"
		);
	}
	void Transformer::setErrorListener(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setErrorListener",
			"(Ljavax/xml/transform/ErrorListener;)V",
			arg0.__jniObject().object()
		);
	}
	void Transformer::setOutputProperties(java::util::Properties arg0)
	{
		__thiz.callMethod<void>(
			"setOutputProperties",
			"(Ljava/util/Properties;)V",
			arg0.__jniObject().object()
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
	void Transformer::setURIResolver(__JniBaseClass arg0)
	{
		__thiz.callMethod<void>(
			"setURIResolver",
			"(Ljavax/xml/transform/URIResolver;)V",
			arg0.__jniObject().object()
		);
	}
	void Transformer::transform(__JniBaseClass arg0, __JniBaseClass arg1)
	{
		__thiz.callMethod<void>(
			"transform",
			"(Ljavax/xml/transform/Source;Ljavax/xml/transform/Result;)V",
			arg0.__jniObject().object(),
			arg1.__jniObject().object()
		);
	}
} // namespace javax::xml::transform


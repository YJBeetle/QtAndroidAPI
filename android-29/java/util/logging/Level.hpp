#pragma once

#include "../../../__JniBaseClass.hpp"

namespace __jni_impl::java::util
{
	class Locale;
}

namespace __jni_impl::java::util::logging
{
	class Level : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject ALL();
		static QAndroidJniObject CONFIG();
		static QAndroidJniObject FINE();
		static QAndroidJniObject FINER();
		static QAndroidJniObject FINEST();
		static QAndroidJniObject INFO();
		static QAndroidJniObject OFF();
		static QAndroidJniObject SEVERE();
		static QAndroidJniObject WARNING();
		
		// Constructors
		void __constructor();
		
		// Methods
		static QAndroidJniObject parse(jstring arg0);
		static QAndroidJniObject parse(const QString &arg0);
		jboolean equals(jobject arg0);
		jstring getLocalizedName();
		jstring getName();
		jstring getResourceBundleName();
		jint hashCode();
		jint intValue();
		jstring toString();
	};
} // namespace __jni_impl::java::util::logging

#include "../Locale.hpp"

namespace __jni_impl::java::util::logging
{
	// Fields
	QAndroidJniObject Level::ALL()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.logging.Level",
			"ALL",
			"Ljava/util/logging/Level;"
		);
	}
	QAndroidJniObject Level::CONFIG()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.logging.Level",
			"CONFIG",
			"Ljava/util/logging/Level;"
		);
	}
	QAndroidJniObject Level::FINE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.logging.Level",
			"FINE",
			"Ljava/util/logging/Level;"
		);
	}
	QAndroidJniObject Level::FINER()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.logging.Level",
			"FINER",
			"Ljava/util/logging/Level;"
		);
	}
	QAndroidJniObject Level::FINEST()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.logging.Level",
			"FINEST",
			"Ljava/util/logging/Level;"
		);
	}
	QAndroidJniObject Level::INFO()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.logging.Level",
			"INFO",
			"Ljava/util/logging/Level;"
		);
	}
	QAndroidJniObject Level::OFF()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.logging.Level",
			"OFF",
			"Ljava/util/logging/Level;"
		);
	}
	QAndroidJniObject Level::SEVERE()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.logging.Level",
			"SEVERE",
			"Ljava/util/logging/Level;"
		);
	}
	QAndroidJniObject Level::WARNING()
	{
		return QAndroidJniObject::getStaticObjectField(
			"java.util.logging.Level",
			"WARNING",
			"Ljava/util/logging/Level;"
		);
	}
	
	// Constructors
	void Level::__constructor()
	{
		__thiz = QAndroidJniObject(
			"java.util.logging.Level",
			"(V)V");
	}
	
	// Methods
	QAndroidJniObject Level::parse(jstring arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.logging.Level",
			"parse",
			"(Ljava/lang/String;)Ljava/util/logging/Level;",
			arg0
		);
	}
	QAndroidJniObject Level::parse(const QString &arg0)
	{
		return QAndroidJniObject::callStaticObjectMethod(
			"java.util.logging.Level",
			"parse",
			"(Ljava/lang/String;)Ljava/util/logging/Level;",
			QAndroidJniObject::fromString(arg0).object<jstring>()
		);
	}
	jboolean Level::equals(jobject arg0)
	{
		return __thiz.callMethod<jboolean>(
			"equals",
			"(Ljava/lang/Object;)Z",
			arg0
		);
	}
	jstring Level::getLocalizedName()
	{
		return __thiz.callObjectMethod(
			"getLocalizedName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Level::getName()
	{
		return __thiz.callObjectMethod(
			"getName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jstring Level::getResourceBundleName()
	{
		return __thiz.callObjectMethod(
			"getResourceBundleName",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
	jint Level::hashCode()
	{
		return __thiz.callMethod<jint>(
			"hashCode",
			"()I"
		);
	}
	jint Level::intValue()
	{
		return __thiz.callMethod<jint>(
			"intValue",
			"()I"
		);
	}
	jstring Level::toString()
	{
		return __thiz.callObjectMethod(
			"toString",
			"()Ljava/lang/String;"
		).object<jstring>();
	}
} // namespace __jni_impl::java::util::logging

namespace java::util::logging
{
	class Level : public __jni_impl::java::util::logging::Level
	{
	public:
		Level(QAndroidJniObject obj) { __thiz = obj; }
		Level()
		{
			__constructor();
		}
	};
} // namespace java::util::logging


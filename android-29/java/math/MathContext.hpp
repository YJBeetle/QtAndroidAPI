#pragma once

#include "../../__JniBaseClass.hpp"

namespace java::io
{
	class ObjectInputStream;
}
namespace java::math
{
	class RoundingMode;
}

namespace java::math
{
	class MathContext : public __JniBaseClass
	{
	public:
		// Fields
		static QAndroidJniObject DECIMAL128();
		static QAndroidJniObject DECIMAL32();
		static QAndroidJniObject DECIMAL64();
		static QAndroidJniObject UNLIMITED();
		
		MathContext(QAndroidJniObject obj);
		// Constructors
		MathContext(jint &arg0);
		MathContext(jstring &arg0);
		MathContext(const QString &arg0);
		MathContext(jint &arg0, java::math::RoundingMode &arg1);
		MathContext() = default;
		
		// Methods
		jboolean equals(jobject arg0);
		jint getPrecision();
		QAndroidJniObject getRoundingMode();
		jint hashCode();
		jstring toString();
	};
} // namespace java::math


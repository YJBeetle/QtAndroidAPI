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
		static java::math::MathContext DECIMAL128();
		static java::math::MathContext DECIMAL32();
		static java::math::MathContext DECIMAL64();
		static java::math::MathContext UNLIMITED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MathContext(const char *className, const char *sig, Ts...agv) : __JniBaseClass(className, sig, std::forward<Ts>(agv)...) {}
		MathContext(QAndroidJniObject obj);
		
		// Constructors
		MathContext(jint arg0);
		MathContext(jstring arg0);
		MathContext(jint arg0, java::math::RoundingMode arg1);
		
		// Methods
		jboolean equals(jobject arg0);
		jint getPrecision();
		java::math::RoundingMode getRoundingMode();
		jint hashCode();
		jstring toString();
	};
} // namespace java::math


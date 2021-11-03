#pragma once

#include "../../JObject.hpp"

namespace java::io
{
	class ObjectInputStream;
}
class JObject;
class JString;
namespace java::math
{
	class RoundingMode;
}

namespace java::math
{
	class MathContext : public JObject
	{
	public:
		// Fields
		static java::math::MathContext DECIMAL128();
		static java::math::MathContext DECIMAL32();
		static java::math::MathContext DECIMAL64();
		static java::math::MathContext UNLIMITED();
		
		// QAndroidJniObject forward
		template<typename ...Ts> explicit MathContext(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MathContext(QAndroidJniObject obj);
		
		// Constructors
		MathContext(jint arg0);
		MathContext(JString arg0);
		MathContext(jint arg0, java::math::RoundingMode arg1);
		
		// Methods
		jboolean equals(JObject arg0) const;
		jint getPrecision() const;
		java::math::RoundingMode getRoundingMode() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace java::math


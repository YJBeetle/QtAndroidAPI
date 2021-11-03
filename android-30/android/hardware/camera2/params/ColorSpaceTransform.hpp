#pragma once

#include "../../../../JObject.hpp"

class JIntArray;
class JArray;
namespace android::util
{
	class Rational;
}
class JObject;
class JString;

namespace android::hardware::camera2::params
{
	class ColorSpaceTransform : public JObject
	{
	public:
		// Fields
		
		// QJniObject forward
		template<typename ...Ts> explicit ColorSpaceTransform(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		ColorSpaceTransform(QJniObject obj);
		
		// Constructors
		ColorSpaceTransform(JIntArray arg0);
		ColorSpaceTransform(JArray arg0);
		
		// Methods
		void copyElements(JIntArray arg0, jint arg1) const;
		void copyElements(JArray arg0, jint arg1) const;
		jboolean equals(JObject arg0) const;
		android::util::Rational getElement(jint arg0, jint arg1) const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::hardware::camera2::params


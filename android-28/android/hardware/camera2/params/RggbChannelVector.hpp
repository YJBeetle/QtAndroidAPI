#pragma once

#include "../../../../JObject.hpp"

class JFloatArray;
class JObject;
class JString;

namespace android::hardware::camera2::params
{
	class RggbChannelVector : public JObject
	{
	public:
		// Fields
		static jint BLUE();
		static jint COUNT();
		static jint GREEN_EVEN();
		static jint GREEN_ODD();
		static jint RED();
		
		// QJniObject forward
		template<typename ...Ts> explicit RggbChannelVector(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		RggbChannelVector(QJniObject obj);
		
		// Constructors
		RggbChannelVector(jfloat arg0, jfloat arg1, jfloat arg2, jfloat arg3);
		
		// Methods
		void copyTo(JFloatArray arg0, jint arg1) const;
		jboolean equals(JObject arg0) const;
		jfloat getBlue() const;
		jfloat getComponent(jint arg0) const;
		jfloat getGreenEven() const;
		jfloat getGreenOdd() const;
		jfloat getRed() const;
		jint hashCode() const;
		JString toString() const;
	};
} // namespace android::hardware::camera2::params


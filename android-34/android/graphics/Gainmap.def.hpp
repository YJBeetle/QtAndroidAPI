#pragma once

#include "../../JObject.hpp"

class JFloatArray;
namespace android::graphics
{
	class Bitmap;
}
namespace android::os
{
	class Parcel;
}

namespace android::graphics
{
	class Gainmap : public JObject
	{
	public:
		// Fields
		static JObject CREATOR();
		
		// QJniObject forward
		template<typename ...Ts> explicit Gainmap(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		Gainmap(QJniObject obj) : JObject(obj) {}
		
		// Constructors
		Gainmap(android::graphics::Bitmap arg0);
		
		// Methods
		jint describeContents() const;
		jfloat getDisplayRatioForFullHdr() const;
		JFloatArray getEpsilonHdr() const;
		JFloatArray getEpsilonSdr() const;
		android::graphics::Bitmap getGainmapContents() const;
		JFloatArray getGamma() const;
		jfloat getMinDisplayRatioForHdrTransition() const;
		JFloatArray getRatioMax() const;
		JFloatArray getRatioMin() const;
		void setDisplayRatioForFullHdr(jfloat arg0) const;
		void setEpsilonHdr(jfloat arg0, jfloat arg1, jfloat arg2) const;
		void setEpsilonSdr(jfloat arg0, jfloat arg1, jfloat arg2) const;
		void setGainmapContents(android::graphics::Bitmap arg0) const;
		void setGamma(jfloat arg0, jfloat arg1, jfloat arg2) const;
		void setMinDisplayRatioForHdrTransition(jfloat arg0) const;
		void setRatioMax(jfloat arg0, jfloat arg1, jfloat arg2) const;
		void setRatioMin(jfloat arg0, jfloat arg1, jfloat arg2) const;
		void writeToParcel(android::os::Parcel arg0, jint arg1) const;
	};
} // namespace android::graphics


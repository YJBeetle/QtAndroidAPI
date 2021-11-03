#pragma once

#include "../../JObject.hpp"

namespace android::view
{
	class MotionEvent_PointerCoords : public JObject
	{
	public:
		// Fields
		jfloat orientation();
		jfloat pressure();
		jfloat size();
		jfloat toolMajor();
		jfloat toolMinor();
		jfloat touchMajor();
		jfloat touchMinor();
		jfloat x();
		jfloat y();
		
		// QJniObject forward
		template<typename ...Ts> explicit MotionEvent_PointerCoords(const char *className, const char *sig, Ts...agv) : JObject(className, sig, std::forward<Ts>(agv)...) {}
		MotionEvent_PointerCoords(QJniObject obj);
		
		// Constructors
		MotionEvent_PointerCoords();
		MotionEvent_PointerCoords(android::view::MotionEvent_PointerCoords &arg0);
		
		// Methods
		void clear() const;
		void copyFrom(android::view::MotionEvent_PointerCoords arg0) const;
		jfloat getAxisValue(jint arg0) const;
		void setAxisValue(jint arg0, jfloat arg1) const;
	};
} // namespace android::view


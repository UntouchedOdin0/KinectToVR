#pragma once
#include "IKinectHandler.h"
class KinectHandlerBase : public IKinectHandler {
public:
    KinectHandlerBase() {

    }
    ~KinectHandlerBase() {

    }
    virtual void initOpenGL() {};
    virtual void initialise() {};

    virtual std::string statusString(HRESULT stat) { return "statusString behaviour not defined"; };

    virtual void update() {};

    virtual void drawKinectData() {};  // Houses the below draw functions with a check
    virtual void drawKinectImageData() {};
    virtual void drawTrackedSkeletons() {};

    virtual void zeroAllTracking(vr::IVRSystem* &m_sys) {};
    virtual void updateTrackersWithSkeletonPosition(
        vrinputemulator::VRInputEmulator &emulator,
        std::vector<KinectTrackedDevice> trackers
    ) {};
};